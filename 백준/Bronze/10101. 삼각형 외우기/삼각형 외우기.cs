
using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        List<int> numbers = new();

        for(int i = 0; i < 3; i++)
        {
            numbers.Add(int.Parse(Console.ReadLine()));
        }

        int EquilateralCnt =0;
        int IsoscelesCnt = 0;
        int Sum = 0;
        int prevNum = numbers[2];
        for (int i = 0; i < 3; i++)
        {
            if (numbers[i] == 60)
                EquilateralCnt++;
            if (prevNum == numbers[i])
                IsoscelesCnt++;
            prevNum = numbers[i];
            Sum += numbers[i];
        }
        
        if (EquilateralCnt == 3)
        {
            Console.WriteLine("Equilateral");
            return;
        }
        if(Sum != 180)
        {
            Console.WriteLine("Error");
            return;
        }
        if(IsoscelesCnt == 0)
        {
            Console.WriteLine("Scalene");
        }
        else
        {
            Console.WriteLine("Isosceles");
        }
    }
}