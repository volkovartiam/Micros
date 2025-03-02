package timers;

public class TimerCalculatorSTM32 {

	public static void main(String[] args) {

		// Counter Period (AutoReload Register - 16 bits value ) must be between 0 and 65 535
		double ARR = 50000;
		// Prescaler (PSC - 16 bits value) must be between 0 and 65 535.
		double PSC = 640;
		//Тактовая частота	
		double F_CLK_MHZ = 64;
		
		getTimeInSeconds(ARR, PSC, F_CLK_MHZ);
		getFreqInMHz(ARR, PSC, 0.5);
	}

	private static double getTimeInSeconds(double ARR, double PSC, double F_CLK_MHZ) {
		double T_out =  (ARR + 1)*(PSC + 1)/(F_CLK_MHZ * 1000_000 ) ;
		System.out.println("" +  T_out);
		return T_out;
	}
	
	private static double getFreqInMHz(double ARR, double PSC, double T_out) {
		double F_CLK_MHZ =  (ARR + 1)*(PSC + 1)/(T_out * 1000_000 ) ;
		System.out.println(F_CLK_MHZ);
		return F_CLK_MHZ;
	}

}
