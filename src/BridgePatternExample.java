public class BridgePatternExample {
    public static void main(String[] args) {

        Circle circle = new Circle(new Red());
        circle.draw();


        Square square = new Square(new Green());
        square.draw();

        circle.setColor(new Green());
        System.out.print("Changing Circle color to ");
        circle.draw();
    }
}
