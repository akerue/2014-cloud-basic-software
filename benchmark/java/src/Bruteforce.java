/**
 * Benchmark for cloud basic software homework
 */
import timeprofiler.TimeProfile;

import java.io.UnsupportedEncodingException;

public class Bruteforce {
    public static void main(String[] args) throws UnsupportedEncodingException {
        TimeProfile tp = new TimeProfile();
        tp.start();
        bruteforce();
        tp.print_micro_time();
        return;
    }

    public static void bruteforce() throws UnsupportedEncodingException {
        byte ASCII_0 = 48;
        byte ASCII_Z = 90;
        byte[] estimated_ascii = new byte[5];
        String password = "PASS1";
        String estimated;

        for (estimated_ascii[0] = ASCII_0; estimated_ascii[0] <= ASCII_Z; estimated_ascii[0]++ ) {
            for (estimated_ascii[1] = ASCII_0; estimated_ascii[1] <= ASCII_Z; estimated_ascii[1]++ ) {
                for (estimated_ascii[2] = ASCII_0; estimated_ascii[2] <= ASCII_Z; estimated_ascii[2]++ ) {
                    for (estimated_ascii[3] = ASCII_0; estimated_ascii[3] <= ASCII_Z; estimated_ascii[3]++ ) {
                        for (estimated_ascii[4] = ASCII_0; estimated_ascii[4] <= ASCII_Z; estimated_ascii[4]++ ) {
                            estimated = new String(estimated_ascii, "ASCII");
                            if (estimated.equals(password)) {
                                System.out.println("PASSWORD => " + estimated.toString());
                                return;
                            }
                        }
                    }
                }
            }
        }
        System.out.println("Cannot crack...");
        return;
    }
}
