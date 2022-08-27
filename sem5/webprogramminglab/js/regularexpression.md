nameRegex = /^[a-zA-Z\-]+$/;
usernameRegex = /^[a-zA-Z0-9]+$/;
emailRegex = /^(([^<>()[\]\.,;:\s@\"]+(\.[^<>()[\]\.,;:\s@\"]+)*)|(\".+\"))@(([^<>()[\]\.,;:\s@\"]+\.)+[^<>()[\]\.,;:\s@\"]{2,})$/i;
contactRegex = /^[\+]?[(]?[0-9]{3}[)]?[-\s\.]?[0-9]{3}[-\s\.]?[0-9]{4,6}$/i;
passwordRegex = /^(?=.*[0-9])(?=.*[!@#$%^&*])[a-zA-Z0-9!@#$%^&*]{6,16}$/;

VSP = /VSP/;
VSP or vsp  = /VSP/i;
            = new RegExp("VSP","i");
simp or dimp or pimp = /[sdp]imp/;
a to e imp = /[a-e]imp/;
0 to 9 imp = /[0-9]imp/;
0 to 9 impi or impp = /[0-9]imp[ip]/;