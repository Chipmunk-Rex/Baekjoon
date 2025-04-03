
using System.Numerics;

internal class Program
{
    static List<int> results = new();
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        for(int i = 0; i < t; i++)
        {
            TestCase();
        }
        for (int i = 0; i < t; i++)
            Console.WriteLine(results[i]);
    }
    
    private static void TestCase()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int hp = int.Parse(inputs[0]);
        int mp = int.Parse(inputs[1]);
        int atk = int.Parse(inputs[2]);
        int def = int.Parse(inputs[3]);
        hp += int.Parse(inputs[0 + 4]);
        if (hp < 1)
            hp = 1;
        mp += int.Parse(inputs[1 + 4]);
        if (mp < 1)
            mp = 1;
        atk += int.Parse(inputs[2 + 4]);
        if (atk < 0)
            atk = 0;
            def += int.Parse(inputs[3 + 4]);
        //Console.WriteLine(hp + 5 * mp + 2 * atk + 2 * def);

        results.Add(hp + 5 * mp + 2 * atk + 2 * def);
    }
}