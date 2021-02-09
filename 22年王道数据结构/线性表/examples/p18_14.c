//2020年统考真题
#define INT_MAX 0x7fffffff
int abs_(int a){
    if(a<0) return -a;
    else return a;
};

int xls_min(int a,int b, int c){
    if(a<= b && a<=c) return 1;
    return 0;
};

int findMinOfTrip(int A[],int n,int B[],int m,int C[],int p){
    //D_min 用于记录三元组的最小距离，初值赋为INT_MAX
    int i=0,j=0,k=0,D_min=INT_MAX,D;
    while(i<n && j<m && k<p && D_min>0){
        D=abs_(A[i]-B[j])+abs_(B[j]-C[k])+abs_(C[k]-A[i]);//计算D
        if(D<D_min) D_min=D;//更新D
        if(xls_min(A[i],B[j],C[k])) i++;//更新a
        else if(xls_min(B[i],C[j],A[k])) j++;//更新b
        else k++;//更新c
    };
    return D_min;
};

int A[3]={-1,0,9};
int B[4]={-25,-10,10,11};
int C[5]={2,9,17,30,41};

int main(){
	int testInteger=findMinOfTrip(A,3,B,4,C,5);
    printf("Number = %d", testInteger);
	return 0;
}
    