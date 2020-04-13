vector<vector<int> > Solution::generateMatrix(int A) {
    if(A<=0) return vector<vector<int>>();
        vector<vector<int>> result(A,vector<int>(A));
        int xBeg=0,xEnd=A-1;
        int yBeg=0,yEnd=A-1;
        int cur=1;
        while(true){
            for(int i=yBeg;i<=yEnd;i++) result[xBeg][i]=cur++;
            if(++xBeg>xEnd) break;
            for(int i=xBeg;i<=xEnd;i++) result[i][yEnd]=cur++;
            if(--yEnd<yBeg) break;
            for(int i=yEnd;i>=yBeg;i--) result[xEnd][i]=cur++;
            if(--xEnd<xBeg) break;
            for(int i=xEnd;i>=xBeg;i--) result[i][yBeg]=cur++;
            if(++yBeg>yEnd) break;
        }
        return result; 
}
