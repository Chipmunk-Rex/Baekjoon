

internal class Program
{
    static void Main(string[] args)
    {
        //https://www.acmicpc.net/problem/1011
        int t = int.Parse(Console.ReadLine());

        int[] output = new int[t];

        for(int i = 0; i < t; i++)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            int x = int.Parse(inputs[0]);
            int y = int.Parse(inputs[1]);
            int minCount = CalculateCount(x, y);
            output[i] = minCount;
        }
        for (int i = 0; i < t; i++)
            Console.WriteLine(output[i]);

    }

    private static int CalculateCount(int startCoord, int endCoord)
    {
        int count = 0;
        int speed = 0;

        int remainDistance = endCoord - startCoord;
        int currentPos = startCoord;

        int brakingDistance = 0;
        while (currentPos != endCoord)
        {

            //Console.WriteLine("speed : " + speed);
            //Console.WriteLine(currentPos + brakingDistance + speed + 1);
            //Console.WriteLine(currentPos + brakingDistance);
            //    Console.WriteLine(currentPos + brakingDistance - speed);
            if ((uint) currentPos + brakingDistance + speed + 1 <= endCoord)
            {
                //Console.WriteLine("SpeedUp");
                speed++;

                brakingDistance += speed;
            }else
            if((uint)currentPos + brakingDistance <= endCoord)
            {

                //Console.WriteLine("move");
            }
            else
            if ((uint)currentPos + brakingDistance - speed <= endCoord)
            {
                //Console.WriteLine("SpeedDown");
                brakingDistance -= speed;
                speed--;
            }

            currentPos += speed;
            count++;

            //Console.WriteLine("======");
        }
        //Console.WriteLine("Current : " + currentPos);
        return count;
    }
}