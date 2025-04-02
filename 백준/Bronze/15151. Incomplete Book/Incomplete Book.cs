
using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int k = int.Parse(inputs[0]);
        int d = int.Parse(inputs[1]);

        int day = 0;
        int needDay = k;
        int count = 0;
        while(day + needDay <= d)
        {
            count++;
            day += needDay;
            needDay *= 2;
        }
        Console.WriteLine(count);
    }
}