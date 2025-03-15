using System;

class Program
{
    static void Main()
    {
        // 입력받은 N (예: 콘솔 입력)
        long N = long.Parse(Console.ReadLine());
        
        // 0~9까지 각 숫자의 등장 횟수를 저장할 배열
        long[] counts = new long[10];

        // 각 자리수(1, 10, 100, …)별로 계산
        for (int d = 0; d < 10; d++)
        {
            long count = 0;
            // 자릿수마다 factor는 1,10,100, ... 의 값
            for (long factor = 1; factor <= N; factor *= 10)
            {
                long lower = N % factor;                    // 현재 자릿수보다 작은 자릿수
                long current = (N / factor) % 10;             // 현재 자릿수의 숫자
                long higher = N / (factor * 10);              // 현재 자릿수보다 큰 자릿수

                // d가 등장하는 횟수를 자리별로 계산
                if (current > d)
                    count += (higher + 1) * factor;
                else if (current == d)
                    count += (higher * factor) + lower + 1;
                else
                    count += higher * factor;
                
                // 0의 경우에는 '앞에 0이 붙는 경우'를 빼줘야 함 (즉, 실제 표기되지 않는 0)
                if (d == 0)
                    count -= factor;
            }
            counts[d] = count;
        }
        
        // 결과 출력 (0부터 9까지 공백으로 구분)
        Console.WriteLine(string.Join(" ", counts));
    }
}
