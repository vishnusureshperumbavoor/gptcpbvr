import java.sql.*;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
PreparedStatement pst;
Connection conn;
ResultSet rs;
DefaultTableModel dtm;
private void btnupdateActionPerformed(java.awt.event.ActionEvent evt) {                                         
        dtm = (DefaultTableModel)tblstocks.getModel();
        int index = tblstocks.getSelectedRow();
        int id = Integer.parseInt(dtm.getValueAt(index,0).toString());
        
        String name = txtname.getText();
        String sector = cbsector.getSelectedItem().toString();
        String price = txtprice.getText();
        String shares = txtshares.getText();
        
        try{
            String sql = "update stocks set name='"+name+"',sector='"+sector+"',price='"+price+"',shares='"+shares+"' where stockid='"+id+"'";
               pst = conn.prepareStatement(sql);
               int rs = pst.executeUpdate();               
               if(rs==1){
                JOptionPane.showMessageDialog(this,"Successfully deleted");
                   fetch();
                   clear();
               }
        }
        catch(Exception e){
            System.out.println(e);
        }
    } 