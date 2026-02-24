//무한 수열 
/*

top-down 방식을 이용한 dp 풀이 + set을 이용한 탐색 시간의 단축과 메모리 최적화

*/

#include<bits/stdc++.h>
using namespace std;

unordered_map <long long, long long> s;

long long n;
int p,q;
long long A(int i){
    // auto key = s.find(i); //iterator
    // if(key != s.end()) {
    //     return key->second;
    // }
    if(s[i] != 0){
        return s[i];
    }
    /*
    map에서 key가 없었는데 키를 호출하면 0이 지정되는 매커니즘을 이용하여 구현
    */

    
    if(i==0) return 1;
    
    return s[i] = A(i/p) + A(i/q); //equal 로 값을 추가해야 할 것 같음. //map은 []연산이 됐던거같은데..?
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> p >> q;
    s[0] = 1;
    A(n);

    cout << s[n] << '\n';

    return 0;
}