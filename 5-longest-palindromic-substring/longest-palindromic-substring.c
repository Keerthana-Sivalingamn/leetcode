#include<string.h>
char* longestPalindrome(char* str) {
    int len,max=0,start=0,end=0,inc=0;
    len=strlen(str);
    char x[len];
    int dp[len][len];
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j){
                dp[i][j]=1;
            }else{
                dp[i][j]=0;
            }
        }
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]&&((i-j)<2||dp[i-1][j+1]==1)){
                   dp[i][j]=1;
                   if((i-j)>max){
                       max=(i-j);
                       start=j;
                       end=i;
                   }
            }
            
        }
    }
    for(int i=start;i<=end;i++){
        str[inc++]=str[i];
    }
    str[inc]='\0';
    return str;

    
}