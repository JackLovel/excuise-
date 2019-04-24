public readonly struct Point 
{
    public readonly double X;
    public readonly double Y;

    public Point(double x, double y) => (X,Y) = (x,y);

    public override string ToString() => $"({X}, {Y})";
}