import java.sql.*;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
PreparedStatement pst;
Connection conn;
ResultSet rs;
DefaultTableModel dtm;
private void btnaddActionPerformed(java.awt.event.ActionEvent evt) {                                       
        String name = txtname.getText();
        String sector = cbsector.getSelectedItem().toString();
        String price = txtprice.getText();
        String shares = txtshares.getText();
        try{
            String sql = "insert into stocks values ("+null+",'"+name+"','"+sector+"','"+price+"','"+shares+"','"+shares+"')";
            pst = conn.prepareStatement(sql);
            int rs = pst.executeUpdate();
            if(rs==1){
                JOptionPane.showMessageDialog(this,"Successfully deleted");
                   fetch();
                   clear();
            }
        }
        catch(Exception e){
            System.out.println("error" + e);
        }
    }