namespace spinneyDoughnut;

using System;
using System.Text;

public class Program
{
    public static void Main()
    {
        Console.CursorVisible = false;
        Console.SetWindowSize(80, 24);
        Console.SetBufferSize(80, 24);
        Logic logic = new Logic();
        logic.Render();
    }
}



public class Logic
{
    private readonly string brightnessChars = ".,-~:;=!*#$@";
    
        private readonly int width;
        private readonly int height;

        public Logic()
        {
            // Use Console window size if available, otherwise defaults
            try
            {
                width = Console.WindowWidth;
                height = Console.WindowHeight;
            }
            catch
            {
                width = 80;
                height = 24;
            }
            
            if (width < 40) width = 80;
            if (height < 20) height = 24;
        }

        public void Render()
        {
            // Rotation angles
            double A = 0.0;
            double B = 0.0;

            // Precompute centers and scales for projection
            int screenWidth = width;
            int screenHeight = height;
            int centerX = screenWidth / 2;
            int centerY = screenHeight / 2;

            // Doughnut spin logic here

        }
    


}