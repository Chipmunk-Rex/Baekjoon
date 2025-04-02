
using System.Numerics;

internal class Program
{
    static List<int> results = new();
    static bool isLoop = true;
    static void Main(string[] args)
    {
        while (isLoop)
        {
            TestCase();
        }
        foreach(int result in results)
        {
            Console.WriteLine(result);
        }
    }
    
    private static void TestCase()
    {
        //string[] inputs = Console.ReadLine().Split(' ');
        int input = int.Parse(Console.ReadLine());
        if (input == 0)
        {
            isLoop = false;
            return;
        }
        //Console.WriteLine(int.Parse(inputs[0]) > int.Parse(inputs[1]) ? "Yes" : "No");
        results.Add((1 + input) * input / 2);
    }
}