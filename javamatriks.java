/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Praktikum;
import java.util.Scanner;
/**
 *
 * @author MANGGAR-LAPTOP
 */
public class Latihan3 {
    public static void main(String[] args) {
        // penjumlahan matrik dengan array
        int baris, kolom, i, j;
        Scanner in = new Scanner(System.in);
        
        System.out.println("===|Tetapkan Ordo Matriks|===");
        System.out.println("=============================");
        System.out.print("Tentukan Jumlah Baris :"); baris = in.nextInt();
        System.out.print("Tentukan Jumlah Kolom :"); kolom = in.nextInt();
        
        //membuat array untuk menentukan nilai
        int A[][] = new int[baris][kolom];
        int B[][] = new int[baris][kolom];
        int sum[][] = new int[baris][kolom];
        
        // menentukan elemen array
        System.out.println("\nMasukkan elemen untuk Matriks X: ");
        System.out.println("===================================");
        for(i=0; i<baris; i++){
            for(j=0; j<kolom; j++){
                System.out.print("[ " +(i+1)+" ]" + "[ " +(j+1)+" ]:");
                A[i][j] =in.nextInt();
            }
        }
        System.out.println("\nMasukkan elemen untuk Matriks Y");
        System.out.println("=================================");
        for(i=0; i<baris; i++){
            for(j=0; j<kolom; j++){
                System.out.print("[ " +(i+1)+" ]" + "[ " +(j+1)+" ]:");
                B[i][j]=in.nextInt();
            }
        }
        
        //Penjumlahan Matriks
        for(i=0; i<baris; i++){
            for(j=0; j<kolom; j++){
                sum[i][j]=A[i][j] +B[i][j];
            }
        }
        System.out.println("\nHasil Penjumlahan Matriks X dan Y adalah :");
        System.out.println("=================================");
        for(i=0; i<baris; i++){
            for(j=0; j<kolom; j++){
                System.out.print(sum[i][j] +"\t");
                
            }
            System.out.println();
    }
}
}