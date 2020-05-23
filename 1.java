import java.util.Calendar;
import java.util.Date;

public class MyProgram
{
  public static void main(String[] args)
  {
    Calendar calendar = Calendar.getInstance();
    calendar.set(2012, 8, 19);
    Date firstDate = calendar.getTime();
    
    calendar.set(2012, 8, 1);
    Date secondDate = calendar.getTime();
    
    System.out.println("Is firstDate before secondDate? " + firstDate.before(secondDate));
    System.out.println("Is firstDate after secondDate? " + firstDate.after(secondDate));
  }
}