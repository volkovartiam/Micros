package filePrinter;

import java.io.File;
import java.io.IOException;

public class FilesPrinter {

	public static void main(String[] args) throws IOException {

		final String README = "E:/Projects/Micros/Micros/README.md";
		final String ARDUINO = "E:/Projects/Micros/Micros/Arduino";
		final String ATMEGA = "E:/Projects/Micros/Micros/Atmega";
		final String STM32 = "E:/Projects/Micros/Micros/STM32";
        
        printDirByPath(README);
        printDirByPath(ARDUINO);
        //printDirByPath(ATMEGA);        
        //printDirByPath(STM32);
        
	}


	private static void printDirByPath(String filePath) {
		if(exists(filePath)) {
            printDirs(filePath);
        }
	}


	private static void printDirs(String filePath) {
		File dirFile = new File(filePath);
		if(dirFile.isDirectory() ) {
			System.out.println("Папка " + "\n" + filePath + " сожержит папки:");
			File[] files = dirFile.listFiles();
	        for (File file : files) {
				if(file.isDirectory() ) {
					System.out.println(file.getName() );
				}
			}
		} else {
			System.out.println(filePath + " - указан путь файла");
		}
		System.out.println();
	}
	
	
	private static boolean exists(String filePath) {
		File dirFile = new File(filePath);
		boolean isExist = dirFile.exists();
		if(dirFile.exists() ) {
            System.out.println("Файл/Папка существует");
        } else {
            System.out.println("Файл/Папка не существует");
        }
		return isExist;
	}
	
	
}
