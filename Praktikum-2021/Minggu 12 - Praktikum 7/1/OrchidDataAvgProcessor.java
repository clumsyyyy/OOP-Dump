import java.util.List;
import java.util.ArrayList;
import java.io.IOException;

public class OrchidDataAvgProcessor implements Runnable {
    // Tambahkan atribut sesuai kebutuhan
    private OrchidMeanDatum meanDatum;
    private String rawDataFileName;

    public OrchidDataAvgProcessor(OrchidMeanDatum meanDatum, String rawDataFilename) {
        // Konstruktor
        this.meanDatum = meanDatum;
        this.rawDataFileName= rawDataFilename;
    }

    @Override
    public void run() {
        // Menghitung rata-rata dari data yang dibaca dengan CSVReader, lalu update
        // meanDatum dengan rata-rata dari setiap aspek data

        // Apabila muncul IOException, maka hasil pembacaan data adalah kosong
        // dan meanDatum tidak di-update (tidak di throw lagi)
        try {
            CSVReader reader = new CSVReader(this.rawDataFileName, ",");
            reader.setSkipHeader(true);
            List<String[]> fileRows = reader.read();

            float sumPetalLength = 0;
            float sumPetalWidth = 0;
            float sumSepalLength = 0;
            float count = 0;
            for (String[] row: fileRows){
                sumPetalLength += Float.parseFloat(row[0]);
                sumPetalWidth += Float.parseFloat(row[1]);
                sumSepalLength += Float.parseFloat(row[2]);
                count++;
            }
            float avgPetalLength = sumPetalLength / count;
            float avgPetalWidth = sumPetalWidth / count;
            float avgSepalLength = sumSepalLength / count;
            this.meanDatum.setMean(avgPetalLength, avgPetalWidth, avgSepalLength);
        } catch (Exception e){
            this.meanDatum.setMean(-1f, -1f, -1f);
        }
    }
}