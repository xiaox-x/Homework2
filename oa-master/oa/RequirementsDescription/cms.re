As a Applicant, I want to view current classroom usage, so that I can find a spare room
{
	Basic Flow {
		(User) 1. the Applicant shall click view button to apply to check usage of classroom.
		(System) 2. When Applicant applys to check usage of classroom, the ClassroomMS shall organize usage of all classrooms.//功能需求
		(System) 3. When end of this application, the ClassroomMS shall send a list of classroom usage.//功能需求
		(User) 4. the Applicant shall view usage of all classrooms.
	}
}

As a Applicant, I want to create a new application, so that I can apply for a classroom
{
	Basic Flow {
		(User) 1. the Applicant shall input roomID of a spare classroom and usage time.
		(System) 2. When starts a new application, the ClassroomMS shall record roomID and usage time.//非功能需求
		(System) 3. When room is spare, the ClassroomMS shall create a new application and send to administrator.//功能需求
		
	}
}

As a Applicant, I want to revoke my application, so that I can revoke my useless application
{
	Basic Flow {
		(User) 1. the Applicant shall input applicationID.
		(System) 2. When starts revoke application, the ClassroomMS shall record applicationID and check whether application has been processed.//非功能需求
		(System) 3. When application can be revoked, the ClassroomMS shall delete this application.//功能需求
	}
} 

As a Applicant, I want to login this System, so that I can use this System to apply for a classroom
{
	Basic Flow {
		(User) 1. the Applicant shall input studentID and password.
		(User) 2. the Administrator shall click input button.
		(System) 3. When starts a new login, the ClassroomMS shall record studentID and password.//非功能需求
		(System) 4. When end of login, the ClassroomMS shall verify whether account and password match.//功能需求
		(User) 5. if account and password match, the Applicant shall enter this System.
	}
}

As a Administrator, I want to login this System, so that I can manage this System
{
	Basic Flow {
		(User) 1. the Administrator shall input adminID and password.
		(User) 2. the Administrator shall click input button.
		(System) 3. When starts a new login, the ClassroomMS shall record adminID and password.//非功能需求
		(System) 4. When end of login, the ClassroomMS shall verify whether account and password match.//功能需求
		(User) 5. if account and password match, the Administrator shall enter this System.
	}
}

As a Administrator, I want to view current classroom usage
{
	Basic Flow {
		(User) 1. the Administrator shall click view button to apply to check usage of classroom.
		(System) 2. When Administrator applys to check usage of classroom, the ClassroomMS shall organize usage of all classrooms.//功能需求
		(System) 3. When end of this application, the ClassroomMS shall send a list of classroom usage.//功能需求
		(User) 4. the Administrator shall view usage of all classrooms.
	}
}

As a Administrator, I want to  process application, so that applicants can get a classroom
{
	Basic Flow {
		(User) 1. the Applicant shall login in this System.
		(User) 2. the Applicant shall views current classroom usage and selects a spare room.
		(User) 3. the Applicant shall create a new application for this spare room.
		(System) 4. When starts a new application, the ClassroomMS shall records a roomID of this spare room.//非功能需求
		(System) 5. When decide to send this application, the ClassroomMS shall sends this application to Administrator.//功能需求
		(User) 6. the Administrator shall agrees or disagrees this application.
		(System) 7. When end of application, the ClassroonMS shall sends result to applicant.//非功能需求
	}
	
	Alternative Flow {
		
	}
}

As a Administrator, I want to add user, so that student can get a account of this System
{
	Basic Flow {
		(User) 1. the Administrator shall input information of new applicant and input default password.
		(System) 2. When starts adding new user, the ClassroomMS shall record information of new applicant.//非功能需求
		(System) 3. When end of this operation, the ClassroomMS shall use these information to create a new account for new applicant.//功能需求
		(System) 5. the ClassroomMS shall send result of this operation to Administrator.//非功能需求		
	}
}

As a Administrator, I want to delete user, so that I can retrieve accounts of students who have already graduated
{
	Basic Flow {
		(User) 1. When a student graduated, the Administrator shall use ClassroomMS to delete account of this student.
		(User) 2. the Administrator shall input name and studentID.
		(System) 3. When starts to delete user, the ClassroomMS shall record name and studentID and find this account.//非功能需求
		(System) 4. When end of this operation, the ClassroomMS shall delete account from this System.//功能需求
		(System) 5. the ClassroomMS shall send result of this operation to Administrator.
	}
}

As a Administrator, I want to edit user, so that applicants can change their information
{
	Basic Flow {
		
	}
}