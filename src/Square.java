import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Square implements Shape {
    private Color color;

    public Square(Color color) {
        this.color = color;
    }

    @Override
    public void draw() {
        System.out.print("Drawing Square in ");
        color.applyColor();
    }
}
