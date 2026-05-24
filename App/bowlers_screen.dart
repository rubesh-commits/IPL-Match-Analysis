import 'package:flutter/material.dart';
import 'api_service.dart';
import 'charts.dart';
import 'app_bg.dart';

class BowlersScreen extends StatefulWidget {

  const BowlersScreen({super.key});

  @override
  State<BowlersScreen> createState() => _BowlersScreenState();
}

class _BowlersScreenState extends State<BowlersScreen> {

  Map<String, String> playerImages = {

    "YS Chahal":
    "https://documents.iplt20.com/ipl/IPLHeadshot2026/10.png",

    "B Kumar":
    "https://documents.iplt20.com/ipl/IPLHeadshot2026/15.png",

    "SP Narine":
    "https://documents.iplt20.com/ipl/IPLHeadshot2026/156.png",

    "PP Chawla":
    "https://documents.iplt20.com/ipl/IPLHeadshot2024/149.png",

    "R Ashwin":
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/45.png",

    "JJ Bumrah":
    "https://documents.iplt20.com/ipl/IPLHeadshot2026/9.png",

    "DJ Bravo":
    "https://assets.iplt20.com/ipl/IPLHeadshot2022/25.png",

    "A Mishra":
    "https://documents.iplt20.com/ipl/IPLHeadshot2024/107.png",

    "RA Jadeja":
    "https://documents.iplt20.com/ipl/IPLHeadshot2026/46.png",

    "SL Malinga":
    "https://documents.iplt20.com/playerheadshot/ipl/284/211.png",
  };

  Map<String, dynamic> bowlers = {};

  bool isLoading = true;

  @override
  void initState() {
    super.initState();
    fetchData();
  }

  Future<void> fetchData() async {

    final data = await ApiService.getTopBowlers();

    setState(() {
      bowlers = data;
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
          "Top Bowlers",

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

                children: bowlers.entries.map((entry) {

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
                            playerImages[entry.key] != null

                            ? NetworkImage(playerImages[entry.key]!)

                            : null,

                        child: playerImages[entry.key] == null
                            ? const Icon(Icons.person)
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
                        "IPL Bowler",
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
                              Colors.orange.shade300,
                              Colors.orange.shade600,
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

                data: bowlers,

                title: "Top Bowlers Chart",

                color: Colors.orange,
              ),
            ),
          );
        },
      ),
    );
  }
}
