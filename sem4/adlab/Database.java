public class Database {
    public static Connection connect(){
        Connection conn = null;
        try {
            Class.forName("com.mysql.jdbc.Driver");
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/stock-market","root","");
            } catch (SQLException ex) {
                Logger.getLogger(Database.class.getName()).log(Level.SEVERE, null, ex);
            }
      
        catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Database.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        return conn;
    }
}
