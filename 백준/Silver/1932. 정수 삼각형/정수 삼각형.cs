
internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        int[,] map = new int[n, n];

        for (int i = 0; i < n; i++)
        {
            string[] inputs = Console.ReadLine().Split(' ');

            for (int x = 0; x < inputs.Length; x++)
            {
                map[i, x] = int.Parse(inputs[x]);
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            for (int x = 0; x <= i; x++)
            {
                //Console.WriteLine("=====");
                //Console.WriteLine(map[i, x]);
                map[i, x] += map[i + 1, x] > map[i + 1, x + 1] ? map[i + 1, x] : map[i + 1, x + 1];
                //Console.WriteLine(map[i, x]);
            }
        }
        Console.WriteLine(map[0, 0]);
    }
}