

using System.Numerics;

internal class Program
{

    static int testCase()
    {
        int n = int.Parse(Console.ReadLine());
        int total = 0;
        int needCount = 0;
        for (int i = 0; i < n; i++)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            int a = int.Parse(inputs[0]);
            int b = int.Parse(inputs[1]);
            total += a;
            total -= b;
            if (needCount > total)
                needCount = total;
        }

        return -needCount;
    }
    static void Main(string[] args)
    {
        List<int> results = new();

        int t = int.Parse(Console.ReadLine());
        for(int i = 0; i < t; i++)
        {
            int result = testCase();
            results.Add(result);
        }

        for (int i = 0; i < t; i++)
            Console.WriteLine(results[i]);
    }
}