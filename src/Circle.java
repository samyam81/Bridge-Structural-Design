import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Circle implements Shape {
    private Color color;

    public Circle(Color color) {
        this.color = color;
    }

    @Override
    public void draw() {
        System.out.print("Drawing Circle in ");
        color.applyColor();
    }
}
