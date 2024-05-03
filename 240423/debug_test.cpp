#include <iostream>

int main()
{
    int loop_count = 2323;

    for (int i = 0; i < 5; i++) 
    {
        std::cout << "Iteration : " << i + 1 << std::endl;
    }
    for (int j = 0; j < 5000; j++) 
    {
        if (loop_count == j)
        {
            int num = 0; 
            // 디버그 없는 모드 = .exe 실행한 것과 똑같음. 
            // 디버그 모드 = 메모리 변화를 모니터링
        }

        std::cout << j << std::endl;
    }

    return 0;
}


