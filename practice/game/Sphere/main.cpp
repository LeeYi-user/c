#include <fstream>

int main()
{
    int r = 128;
    std::ofstream f("output.mcfunction");

    for (int x = -r; x < r; x++)
    {
        for (int y = -r; y < r; y++)
        {
            for (int z = -r; z < r; z++)
            {
                if (x*x + y*y + z*z < r*r and x*x + y*y + z*z > r*r - r*2)
                {
                    f << "setblock ~" << x << " ~" << y << " ~" << z << " stone\n";
                }
            }
        }
    }
}
