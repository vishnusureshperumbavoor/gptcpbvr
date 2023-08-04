import java.sql.*;
import javax.swing.table.DefaultTableModel;
Statement stmt;
Connection conn;
ResultSet rs;
DefaultTableModel dtm;

// DATABASE IMPORT 
public Stocks() {
    initComponents();
    conn = Database.connect();
    fetch();
}

// CREATE
String name = txtname.getText();
String price = txtprice.getText();
try{
    String sql = "insert into stocks values ("+null+",'"+name+"','"+price+"')";
    stmt = conn.createStatement();
    rs = stmt.executeUpdate(sql);
    if(rs.next()){
        fetch();
    }
}
catch(Exception e){
    System.out.println("error" + e);
}

// READ 
try{
    String sql = "select * from stocks";
    stmt = conn.createStatement();
    rs = stmt.executeQuery(sql);
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
    stmt = conn.createStatement();
    rs = pst.executeUpdate(sql);               
    if(rs.next()){
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
        stmt = conn.prepareStatement();
        rs = pst.executeUpdate(sql);               
        if(rs.next()){
            fetch();
        }
    }
    catch(Exception e){
        System.out.println(e);
    }
} 
