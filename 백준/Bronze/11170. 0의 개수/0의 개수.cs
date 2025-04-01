

using System.Numerics;

internal class Program
{

    static int calc(int n)
    {
        if (n == -1)
            return 0;
        int count = 1;
        for (int factor = 1; factor * 10 <= n; factor *= 10)
        {
            int lower = n % factor;
            int current = (n / factor) % 10;
            int higher = n / (factor * 10);

            int prev = count;
            //Console.WriteLine($"Fac : {factor}, {lower}, {higher}");

            if (current > 0)
                count += (higher + 1) * factor;
            else
                count += (higher) * factor + lower + 1;
            count -= factor;
            //Console.WriteLine(count - prev);

        }
        return count;
    }
    static int Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        //Console.WriteLine(calc(n));
        List<string> inputs = new List<string>();
        for (int i = 0; i < n; i++)
        {
            string[] arr = Console.ReadLine().Split(' ');

            inputs.Add(arr[0]);
            inputs.Add(arr[1]);
        }


        for (int i = 0; i < n; i++)
        {
            int result = calc(int.Parse(inputs[i * 2 + 1])) - calc(int.Parse(inputs[i * 2]) - 1);
            Console.WriteLine(result);
        }
        return 0;
    }
}