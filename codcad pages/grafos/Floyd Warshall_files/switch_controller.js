//Follow Comments Switch
function controller_switch(type, id){

		  var followElement = document.querySelector('.followCommentsSwitch');     
	      var firstChange = true; 
	      var followSwitchStatus = false;
	      var followSwitch = null;	      

		  $.ajax({
            url:'/api/following_comments/' + type + '/' + id, 
            type:'GET',
            dataType:'json',
            success: function(data){
              //console.log('Status ' + data.status);
              //console.log('Score ' + data.score)
              console.log('Data status: ' + data.status)
              if(data.status == 'true'){

              	$(".followCommentsSwitch").prop("checked", true);              	              	
              	//followSwitchStatus = false; //Due it will change on the onChange method
              	followSwitchStatus = true;
              	console.log('true');
              }else{
              	console.log('false');
              	//followSwitchStatus = true; //Due it will change on the onChange method
              }

              followElement = document.querySelector('.followCommentsSwitch');     
              followSwitch = new Switchery(followElement);	      

              followElement.onchange = function(){
              	console.log('Trying change...');
				
				followSwitchStatus = !followSwitchStatus;
				console.log(followSwitchStatus + " " + followSwitch.checked)
				$.ajax({
			        url:'/api/change_following_status/' + type + '/' + id + '/' + followSwitchStatus, 
			        type:'GET',
			        dataType:'json',
			        success: function(data){
			          //console.log('Status ' + data.status);
			          //console.log('Score ' + data.score)
			          console.log(data.status);

			        }									            

                });
				
				};

            }									            

          });		      
}


/*onChange : 	
	
		
	
}*/