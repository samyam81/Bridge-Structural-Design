using System;

public interface Color
{
    void applyColor();
}

public class Red : Color
{
    public void applyColor()
    {
        Console.WriteLine("Red");
    }
}

public class Green : Color
{
    public void applyColor()
    {
        Console.WriteLine("Green");
    }
}

public interface Shape
{
    void draw();
}

public class Circle : Shape
{
    private Color color;

    public Circle(Color color)
    {
        this.color = color;
    }

    public void draw()
    {
        Console.Write("Drawing Circle in ");
        color.applyColor();
    }

    public void setColor(Color newColor)
    {
        color = newColor;
    }
}

public class Square : Shape
{
    private Color color;

    public Square(Color color)
    {
        this.color = color;
    }

    public void draw()
    {
        Console.Write("Drawing Square in ");
        color.applyColor();
    }

    public void setColor(Color newColor)
    {
        color = newColor;
    }
}

class BridgePatternExample
{
    static void Main(string[] args)
    {
        Color red = new Red();
        Color green = new Green();

        Circle circle = new Circle(red);
        circle.draw();

        Square square = new Square(green);
        square.draw();

        circle.setColor(green);
        Console.Write("Changing Circle color to ");
        circle.draw();
    }
}
