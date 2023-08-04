import java.sql.*;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
PreparedStatement pst;
Connection conn;
ResultSet rs;
DefaultTableModel dtm;
private void fetch(){
        try{
             stmt = conn.createStatement();
             rs = stmt.executeQuery("select *,price*shares as marketCap from stocks");
             dtm = (DefaultTableModel)tblstocks.getModel();
             dtm.setRowCount(0);
             while(rs.next()){
                 Vector v = new Vector();
                 v.add(rs.getString("stockid"));
                 v.add(rs.getString("name"));
                 v.add(rs.getString("sector"));
                 v.add(rs.getString("price"));
                 v.add(rs.getString("shares"));
                 v.add(rs.getString("supply"));
                 v.add(rs.getString("marketCap"));
                 dtm.addRow(v);
             } 
             
            pst = conn.prepareStatement("select * from sectors");
            rs = pst.executeQuery();
            cbsector.removeAllItems();
            while(rs.next()){
                cbsector.setSelectedItem(null);
                cbsector.addItem(rs.getString("sector"));
            }
        }
        catch(Exception e){
                     System.out.println("error" + e);
         }
    } 