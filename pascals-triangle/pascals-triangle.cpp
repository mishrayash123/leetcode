class Solution {
public:
    vector<vector<int>> generate(int numRows) {
           vector<vector<int>> pt;
        vector<int> aux;
        for(int i=0; i<numRows; i++){
            for(int j=0; j<i+1; j++){
                if(j==0 || j==i){
                    aux.push_back(1);
                }else{
                    aux.push_back(pt[i-1][j-1] + pt[i-1][j]);
                }
            }
            pt.push_back(aux);
            aux.clear();
        }
        return pt;
    }
};