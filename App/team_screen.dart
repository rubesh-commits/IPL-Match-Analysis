import 'package:flutter/material.dart';
import 'api_service.dart';
import 'charts.dart';
import 'app_bg.dart';

class TeamScreen extends StatefulWidget {

  const TeamScreen({super.key});

  @override
  State<TeamScreen> createState() => _TeamScreenState();
}

class _TeamScreenState extends State<TeamScreen> {

  Map<String, String> teamlogo = {

    "Mumbai Indians":
    "https://documents.iplt20.com/ipl/MI/Logos/Logooutline/MIoutline.png",

    "Chennai Super Kings":
    "https://documents.iplt20.com/ipl/CSK/logos/Logooutline/CSKoutline.png",

    "Kolkata Knight Riders":
    "https://documents.iplt20.com/ipl/KKR/Logos/Logooutline/KKRoutline.png",

    "Rajasthan Royals":
    "https://documents.iplt20.com/ipl/RR/Logos/Logooutline/RRoutline.png",

    "Royal Challengers Bangalore":
    "https://documents.iplt20.com/ipl/RCB/Logos/Logooutline/RCBoutline.png",

    "Sunrisers Hyderabad":
    "https://documents.iplt20.com/ipl/SRH/Logos/Logooutline/SRHoutline.png",

    "Kings XI Punjab":
    "https://documents.iplt20.com/ipl/PBKS/Logos/Logooutline/PBKSoutline.png",

    "Delhi Daredevils":
    "https://static.toiimg.com/thumb/msid-66933404,imgsize-160915,width-400,resizemode-4/66933404.jpg",

    "Delhi Capitals":
    "https://documents.iplt20.com/ipl/DC/Logos/LogoOutline/DCoutline.png",

    "Gujarat Titans":
    "https://documents.iplt20.com/ipl/GT/Logos/Logooutline/GToutline.png",
  };

  Map<String, dynamic> wins = {};

  bool isLoading = true;

  @override
  void initState() {
    super.initState();
    fetchData();
  }

  Future<void> fetchData() async {

    final data = await ApiService.getTeamWins();

    setState(() {
      wins = data;
      isLoading = false;
    });
  }

  @override
  Widget build(BuildContext context) {

    return Scaffold(

      backgroundColor: Colors.transparent,

      appBar: AppBar(

        elevation: 0,

        backgroundColor: Colors.deepPurple,

        centerTitle: true,

        title: const Text(
          "Team Wins",

          style: TextStyle(
            fontWeight: FontWeight.bold,
            color: Colors.white,
          ),
        ),
      ),

      body: AppBackground(

        child: isLoading

            ? const Center(
                child: CircularProgressIndicator(),
              )

            : ListView(
                padding: const EdgeInsets.all(10),

                children: wins.entries.map((entry) {

                  return Card(

                    margin: const EdgeInsets.symmetric(
                      horizontal: 8,
                      vertical: 8,
                    ),

                    elevation: 5,

                    shadowColor: Colors.black26,

                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(18),
                    ),

                    child: ListTile(

                      contentPadding: const EdgeInsets.symmetric(
                        horizontal: 15,
                        vertical: 10,
                      ),

                      leading: CircleAvatar(

                        radius: 28,

                        backgroundColor: Colors.grey.shade200,

                        backgroundImage:
                            teamlogo[entry.key] != null

                            ? NetworkImage(teamlogo[entry.key]!)

                            : null,

                        child: teamlogo[entry.key] == null
                            ? const Icon(Icons.groups)
                            : null,
                      ),

                      title: Text(

                        entry.key,

                        style: const TextStyle(
                          fontWeight: FontWeight.bold,
                          fontSize: 16,
                        ),
                      ),

                      subtitle: const Text(
                        "IPL Team",
                        style: TextStyle(
                          color: Colors.grey,
                        ),
                      ),

                      trailing: Container(

                        padding: const EdgeInsets.symmetric(
                          horizontal: 14,
                          vertical: 10,
                        ),

                        decoration: BoxDecoration(

                          gradient: LinearGradient(
                            colors: [
                              Colors.blue.shade300,
                              Colors.blue.shade700,
                            ],
                          ),

                          borderRadius: BorderRadius.circular(14),
                        ),

                        child: Text(

                          entry.value.toString(),

                          style: const TextStyle(
                            color: Colors.white,
                            fontWeight: FontWeight.bold,
                            fontSize: 15,
                          ),
                        ),
                      ),
                    ),
                  );

                }).toList(),
              ),
      ),

      floatingActionButton: FloatingActionButton(

        backgroundColor: Colors.deepPurple,

        child: const Icon(
          Icons.bar_chart,
          color: Colors.white,
        ),

        onPressed: () {

          Navigator.push(

            context,

            MaterialPageRoute(

              builder: (_) => BarChartWidget(

                data: wins,

                title: "Team Wins Chart",

                color: Colors.blue,
              ),
            ),
          );
        },
      ),
    );
  }
}
