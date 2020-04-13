int numberofpaths(int a, int b){
    if(a==1 || b==1){
        return 1;
    }
    return numberofpaths(a-1, b) + numberofpaths(a, b-1);
}

int Solution::uniquePaths(int A, int B) {
    int paths = numberofpaths(A, B);
    return paths;
}
