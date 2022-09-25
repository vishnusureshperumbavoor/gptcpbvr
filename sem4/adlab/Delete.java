import java.sql.*;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
PreparedStatement pst;
Connection conn;
ResultSet rs;
DefaultTableModel dtm;
private void btndeleteActionPerformed(java.awt.event.ActionEvent evt) {  
        dtm = (DefaultTableModel)tblstocks.getModel();
        int index = tblstocks.getSelectedRow();
        int id = Integer.parseInt(dtm.getValueAt(index,0).toString());
        int dialogResult = JOptionPane.showConfirmDialog(null,"do u want to delete","warning",JOptionPane.YES_NO_OPTION);
        if(dialogResult==JOptionPane.YES_OPTION){
            try{
                String sql = "delete from stocks where stockid='"+id+"'";
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
    }