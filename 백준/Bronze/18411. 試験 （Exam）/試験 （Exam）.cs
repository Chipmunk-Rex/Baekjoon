

using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int[] inputs = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

        int min = int.MaxValue;
        int sum = 0;
        foreach(int num in inputs)
        {
            sum += num;
            if (min > num)
                min = num;
        }
        sum -= min;
        Console.WriteLine(sum);
    }
}