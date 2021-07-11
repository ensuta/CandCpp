#include <iostream> 
#include <cmath>
#include <ctime>

// 황금비율 상수 
const double gr_num = (1 + sqrt(5)) / 2; 

//일반적인 재귀호출 피보나치 (노가다)
int rc_fibo(int n) { 
    if (n <= 1) 
        return n;  
        return rc_fibo(n - 1) + rc_fibo(n - 2); 
    } 
    
 //동적프로그래밍 사용한 피보나치(점화식 도출) 
 int dy_fibo(int n) { 
     int *arr = new int[n + 1]; 
     arr[0] = 0; 
     arr[1] = 1; 
     
     for (int i = 2; i <= n; i++) { 
         arr[i] = arr[i - 1] + arr[i - 2]; 
            } 
        return arr[n];
        } 
        
// 피보나치 공식사용 
int fm_fibo(int n) { 
    return round(pow(gr_num, n) / sqrt(5)); 
    } 

// 출력
int main() {    
    int n = 0; 
    std::cout << "N 번째 항 : ";
    std::cin >> n; 
    std::cout << "노가다 결과: " << rc_fibo(n) << " 점화식 결과: " << dy_fibo(n)<< " 공식 결과: " <<fm_fibo(n) << std::endl; 
    return 0; 
    }
