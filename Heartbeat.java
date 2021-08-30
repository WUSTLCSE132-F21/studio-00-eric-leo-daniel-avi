
public class Heartbeat {

	public static void main(String[] args) {
		double time = 0;
		while(true)
		{
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			time += 1;
			System.out.println("Time=" + time);

		}

	}

}
