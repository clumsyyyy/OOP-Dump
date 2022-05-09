package CarException;
public class CarNotStartedException extends Exception {
  
    public CarNotStartedException() {
      super();
    }
  
    public String toString() {
      return "Cannot drive. Car is not started.";
    }
  }
  