int countChar(string s, char c){
     int cnt = 0;
     
     for(char x: s){
         if(x==c) cnt++;
     }
     return cnt;
}
