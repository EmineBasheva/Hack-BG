string reduce_file_path(string path)
{
	vector<string> reducePath;

	for(int i = 0; i < path.length(); i++)
	{
		//cout << path[i];
		while(path[i] == '/' && path[i+1] == '/')
		{
			path.erase(i, 1);
		}
		
		
		if(path[path.length()-1] == '/')
		{
			path[path.length()-1] == ' ';
		}

	
	}


	return path;
}


int main()
{
	cout << reduce_file_path("/") << endl;
	cout << reduce_file_path("/srv/../")<<endl;
	cout << reduce_file_path("/srv/www/htdocs/wtf/") << endl;
	cout << reduce_file_path("/srv/www/htdocs/wtf") << endl;
	cout << reduce_file_path("/srv/./././././") << endl;
	cout << reduce_file_path("/etc//wtf/") << endl;
	cout << reduce_file_path("/etc/../etc/../etc/../") << endl;
	cout << reduce_file_path("//////////////") << endl;
	cout << reduce_file_path("/../") << endl;
	reduce_file_path("blah blah");
	cout <<"hello world" << endl;
	return 0;
}
