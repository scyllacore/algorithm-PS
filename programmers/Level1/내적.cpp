#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer=0;
    
    int size = a.size();
    int i;    

    for(i=0; i<size; i++){
        answer += (a[i]*b[i]);
    }
    
    return answer;
}