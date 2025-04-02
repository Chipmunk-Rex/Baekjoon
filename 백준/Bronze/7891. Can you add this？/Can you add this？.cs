using System.Numerics;

internal class Program
{
    static List<long> results = new();
    static bool isLoop = true;
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        for(int i = 0; i < n; i++)
        {
            TestCase();
        }
        foreach(long result in results)
        {
            Console.WriteLine(result);
        }
    }

    private static void TestCase()
    {
        string[] inputs = Console.ReadLine().Split(' ');

        results.Add(long.Parse(inputs[0]) + long.Parse(inputs[1]));
    }
}