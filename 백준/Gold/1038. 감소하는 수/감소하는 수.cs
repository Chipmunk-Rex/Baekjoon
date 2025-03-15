
internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        if (n >= 1023)
        {
            Console.WriteLine(-1);
            return;
        }

        Console.WriteLine(TryAddToSelectDigit(0, 1, n));
    }
    static long TryAddToSelectDigit(long number, int digit, int count)
    {
        if (count == 0)
            return number;
        //Console.WriteLine("======");
        //Console.WriteLine(number);
        //Console.WriteLine(digit);
        //Console.WriteLine(count);

        int nextDigitNum = (int)(number / (digit * 10)) % 10;
        int currentDigitNum = (int)(number / digit) % 10;

        if (nextDigitNum == (currentDigitNum + 1) % 10)
            return TryAddToSelectDigit(number, digit * 10, count);

        number += digit;
        //Console.WriteLine($"Num {number}");
        number -= number % digit;

        //Console.WriteLine($"Num {number}");

        int temp = 0;
        for (int i = 1; i < digit; i *= 10)
        {
            number += temp * i;
            temp++;
        }
        //Console.WriteLine($"Num {number}");


        int prevDigitNum = (int) ((((long)number * 10) / digit) % 10);

        currentDigitNum = (int)(number / digit) % 10;

        //Console.WriteLine($"Com {prevDigitNum} {currentDigitNum}");
        if (prevDigitNum >= currentDigitNum)
        {
            //Console.WriteLine($"Hi");
            return TryAddToSelectDigit(number, digit, count);
        }

        //Console.WriteLine($"True {number}");
        count--;

        return TryAddToSelectDigit(number, 1, count);
    }
}