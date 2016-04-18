class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)return s;
        string result = s;
        int stringSize = s.size();
        int groupSize = 2 * numRows - 2;
        int groupNum = (stringSize - 1) / groupSize + 1;
        int indexInGroupOfLastElement = (stringSize - 1)  % groupSize;
        int rowIndexOfLastElement = (indexInGroupOfLastElement < numRows - 1) ? indexInGroupOfLastElement : (numRows - 1 - (indexInGroupOfLastElement + 1 -numRows));
        for(int i = 0; i < stringSize; i++)
        {
            int curIndexInGroup = (i) % groupSize;
            int curRowIndex = (curIndexInGroup < numRows - 1) ? curIndexInGroup : (numRows - 1 - (curIndexInGroup + 1 -numRows));//
            int curGroupIndex = i / groupSize;
            int rowIndexFlag = (curIndexInGroup < numRows) ? 0 : 1;
            int curResultIndex = 0;
                 
            if(curRowIndex == 0) curResultIndex = curGroupIndex;
            else
            {
                curResultIndex = (2 * curRowIndex  * (groupNum) - groupNum);
                if(curRowIndex == numRows - 1)
                curResultIndex += (curGroupIndex + rowIndexFlag);
                else
                curResultIndex += (2 * curGroupIndex + rowIndexFlag);
                
                if(curRowIndex > rowIndexOfLastElement)
                {
                    if(indexInGroupOfLastElement <= numRows - 1) curResultIndex -= (curRowIndex - 1 + (curRowIndex - indexInGroupOfLastElement - 1));
                    else curResultIndex -= (rowIndexOfLastElement - 1);
                }
                else if(curRowIndex == rowIndexOfLastElement) curResultIndex -= (rowIndexOfLastElement - 1);
                else curResultIndex -= (curRowIndex - 1);
            }
            result.at(curResultIndex) = s.at(i); 
        }
        return result;
    }
};
