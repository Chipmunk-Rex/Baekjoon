

using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            int input = int.Parse(Console.ReadLine());
            sum += input < 40 ? 40 : input;
        }
        Console.WriteLine(sum / 5);
    }
}