#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            answer = answer*10 + (s[i]-'0');
        }
        else{
            if(s[i]=='z' && s[i+1]=='e'){
                answer = answer*10;
                i+=3;
            }
            else if(s[i]=='o'){
                answer = answer*10 +1;
                i+=2;
            }
            else if(s[i]=='t'&& s[i+1]=='w'){
                answer = answer*10 +2;
                i+=2;
            }
            else if(s[i]=='t'&& s[i+1]=='h'){
                answer = answer*10 +3;
                i+=4;
            }
            else if(s[i]=='f'&& s[i+1]=='o'){
                answer = answer*10 +4;
                i+=3;
            }
            else if(s[i]=='f'&& s[i+1]=='i'){
                answer = answer*10 +5;
                i+=3;
            }
            else if(s[i]=='s' && s[i+1]=='i'){
                answer = answer*10 +6;
                i+=2;
            }
            else if(s[i]=='s' && s[i+1]=='e'){
                answer = answer*10+7;
                i+=4;
            }
            else if(s[i]=='e'){
                answer = answer*10 +8;
                i+=4;
            }
            else if(s[i]=='n'){
                answer = answer*10 +9;
                i+=3;
            }
        }
        
    }
    
    return answer;
}