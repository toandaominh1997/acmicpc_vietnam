#include <bits/stdc++.h>
using namespace std;

const int N=1e3+7;
int T;
int m, n;
char a[N][N];
int row[N][3];
int col[N][3];
int main(){
    scanf("%d\n", &T);
    while(T--){
        scanf("%d %d\n", &m, &n);
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                scanf("%c", &a[i][j]);
                row[i][a[i][j]-'0']++;
                col[j][a[i][j]-'0']++;
            }
            scanf("\n");
        }
        int res=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]=='0'){
                    continue;
                }
                if(a[i][j]=='1'){
                    res+=(row[i][2])*(col[j][2]);
                }
                else{
                    res+=(row[i][1]*col[j][1]);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}