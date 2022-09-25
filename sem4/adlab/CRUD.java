import java.sql.*;
import javax.swing.table.DefaultTableModel;
PreparedStatement pst;
Connection conn;
ResultSet rs;
DefaultTableModel dtm;

// CREATE
String name = txtname.getText();
String price = txtprice.getText();
try{
    String sql = "insert into stocks values ("+null+",'"+name+"','"+price+"')";
    pst = conn.prepareStatement(sql);
    int rs = pst.executeUpdate();
    if(rs==1){
            fetch();
        }
    }
    catch(Exception e){
        System.out.println("error" + e);
}

// READ 
try{
            String sql = "select *,price*shares as marketCap from stocks";
             pst = conn.prepareStatement(sql);
             rs = stmt.executeQuery();
             dtm = (DefaultTableModel)tblstocks.getModel();
             dtm.setRowCount(0);
             while(rs.next()){
                 Vector v = new Vector();
                 v.add(rs.getString("stockid"));
                 v.add(rs.getString("name"));
                 v.add(rs.getString("price"));
                 dtm.addRow(v);
             } 
        }
        catch(Exception e){
                     System.out.println("error" + e);
         }

// UPDATE 
dtm = (DefaultTableModel)tblstocks.getModel();
        int index = tblstocks.getSelectedRow();
        int id = Integer.parseInt(dtm.getValueAt(index,0).toString());
        
        String name = txtname.getText();
        String price = txtprice.getText();
        
        try{
            String sql = "update stocks set name='"+name+"',price='"+price+"' where stockid='"+id+"'";
               pst = conn.prepareStatement(sql);
               int rs = pst.executeUpdate();               
               if(rs==1){
                   fetch();
               }
        }
        catch(Exception e){
            System.out.println(e);
        }

// DELETE 
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
                   fetch();
               }
        }
        catch(Exception e){
            System.out.println(e);
        }
        }   